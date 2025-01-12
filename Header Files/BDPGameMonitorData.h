//
//     Generated by private class-dump
//

@interface BDPGameMonitorData : BDModel <NSCopying> {
    double _fps;
    long long _drawcall;
    long long _vert;
    long long _tri;
    long long _jank;
    long long _jank_duration;
    long long _game_stutter;
}

@property (nonatomic) double fps;
@property (nonatomic) long long drawcall;
@property (nonatomic) long long vert;
@property (nonatomic) long long tri;
@property (nonatomic) long long jank;
@property (nonatomic) long long jank_duration;
@property (nonatomic) long long game_stutter;

- (long long)drawcall;
- (void)setDrawcall:(long long)arg0;
- (long long)vert;
- (void)setVert:(long long)arg0;
- (long long)tri;
- (void)setTri:(long long)arg0;
- (long long)jank;
- (void)setJank:(long long)arg0;
- (long long)jank_duration;
- (void)setJank_duration:(long long)arg0;
- (long long)game_stutter;
- (void)setGame_stutter:(long long)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (double)fps;
- (void)setFps:(double)arg0;

@end
