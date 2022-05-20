graph = {
  '1' : ['2','3','4'],
  '3' : ['1', '2','5'],
  '2' : ['1','3'],
  '4' : ['1'],
  '5' : ['3']
}
visited =[]
queue =[]
def bfs(visited, graph, node):
    visited.append(node)
    queue.append(node)
    while queue:
        m = queue.pop(0)
        print(m)
        for neighbour in graph[m]:
            if neighbour not in visited:
                visited.append(neighbour)
                queue.append(neighbour)

print("BFS graph after traversal is :")
bfs(visited, graph, '1')
