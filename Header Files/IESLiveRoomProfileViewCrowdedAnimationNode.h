//
//     Generated by private class-dump
//

@interface IESLiveRoomProfileViewCrowdedAnimationNode : NSObject {
    BOOL _isShowVip;
    int _fansClubGuide;
    unsigned long long _type;
    id _data;
    id /* block */ _willStartCompletion;
    id /* block */ _didEndCompletion;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) int fansClubGuide;
@property (nonatomic) BOOL isShowVip;
@property (retain, nonatomic) id data;
@property (copy, nonatomic) id /* block */ willStartCompletion;
@property (copy, nonatomic) id /* block */ didEndCompletion;

- (int)fansClubGuide;
- (void)setFansClubGuide:(int)arg0;
- (BOOL)isShowVip;
- (void)setIsShowVip:(BOOL)arg0;
- (id /* block */)willStartCompletion;
- (void)setWillStartCompletion:(id /* block */)arg0;
- (id /* block */)didEndCompletion;
- (void)setDidEndCompletion:(id /* block */)arg0;
- (id)data;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg0;

@end
