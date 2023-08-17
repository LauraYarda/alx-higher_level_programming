-- Listas all shows in hbtn_0d_tvshows that have atleast one genre linked.
-- Records are sorted by ascending tv_shows.tittle and tv_show_genres.genre.genre_id.
SELECT tv_shows.title, tv_show_genres.genre_id FROM tv_shows
JOIN tv_show_genres ON tv_shows.id=tv_show_genres.show_id
ORDER BY tv_shows.title, tv_show_genres.genre_id;
