graph = {
  '1' : ['2','3','4'],
  '3' : ['1', '2','5'],
  '2' : ['1','3'],
  '4' : ['1'],
  '5' : ['3']
}
visited =set()
def dfs(visited,graph,root):
    if root not in visited:
        print(root)
        visited.add(root)
        for neighbour in graph[root]:
            dfs(visited,graph,neighbour)

print("Graph after traversal :")
dfs(visited,graph,'1')
