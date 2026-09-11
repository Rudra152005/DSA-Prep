class Solution:
    def validPath(self, n: int, edges: List[List[int]], source: int, destination: int) -> bool:
        graph = [[] for _ in range(n)]

        for u, v in edges:
            graph[u].append(v)
            graph[v].append(u)
        que = deque([source])
        vis = {source}
        while que:
            node = que.popleft()
            if node == destination:
                return True
            for nig in graph[node]:
                if nig not in vis:
                    vis.add(nig)
                    que.append(nig)
        return False

        