class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        que = deque([0])
        vis = {0}
        while que:
            node = que.popleft()
            for key in rooms[node]:
                if key not in vis:
                    vis.add(key)
                    que.append(key)
        return len(rooms) == len(vis)

        