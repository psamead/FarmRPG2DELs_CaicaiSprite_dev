using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.Tilemaps;

[RequireComponent(typeof(AStar))]
public class AStarTest_deprecated : MonoBehaviour
{
    private AStar aStar;
    [SerializeField] private Vector2Int startPosition;
    [SerializeField] private Vector2Int finishPosition;
    [SerializeField] private Tilemap tileMapToDisplayPathOn = null;
    [SerializeField] private TileBase tileToUseToDisplayPath = null;
    [SerializeField] private bool displayStartAndFinish = false;
    [SerializeField] private bool displayPath = false;

    private Stack<NPCMovementStep> npcMovementSteps;

    private void Awake()
    {
        aStar = GetComponent<AStar>();

        npcMovementSteps = new Stack<NPCMovementStep>();
    }


    private void Update()
    {
        if (startPosition != null && finishPosition != null && tileMapToDisplayPathOn != null && tileToUseToDisplayPath != null)
        {
            // Display start and finish tiles
            if (displayStartAndFinish)
            {
                // Display start tile
                tileMapToDisplayPathOn.SetTile(new Vector3Int(startPosition.x, startPosition.y, 0), tileToUseToDisplayPath);

                // Display finish tile
                tileMapToDisplayPathOn.SetTile(new Vector3Int(finishPosition.x, finishPosition.y, 0), tileToUseToDisplayPath);
            }
            else
            // Clear start and finish
            {
                // clear start tile
                tileMapToDisplayPathOn.SetTile(new Vector3Int(startPosition.x, startPosition.y, 0), null);

                // clear finish tile
                tileMapToDisplayPathOn.SetTile(new Vector3Int(finishPosition.x, finishPosition.y, 0), null);
            }

            // Display path
            if (displayPath)
            {
                // Get current scene name
                Enum.TryParse<SceneName>(SceneManager.GetActiveScene().name, out SceneName sceneName);

                // Build path
                aStar.BuildPath(sceneName, startPosition, finishPosition, npcMovementSteps);

                // Display path on tilemap
                foreach (NPCMovementStep npcMovementStep in npcMovementSteps)
                {
                    tileMapToDisplayPathOn.SetTile(new Vector3Int(npcMovementStep.gridCoordinate.x, npcMovementStep.gridCoordinate.y, 0), tileToUseToDisplayPath);
                }
            }
            else
            {
                // Clear path
                if (npcMovementSteps.Count > 0)
                {
                    // Clear path on tilemap
                    foreach (NPCMovementStep npcMovementStep in npcMovementSteps)
                    {
                        tileMapToDisplayPathOn.SetTile(new Vector3Int(npcMovementStep.gridCoordinate.x, npcMovementStep.gridCoordinate.y, 0), null);
                    }

                    // Clear movement steps
                    npcMovementSteps.Clear();
                }
            }
        }
    }
}
