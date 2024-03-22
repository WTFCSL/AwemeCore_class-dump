//
//     Generated by private class-dump
//

@class TTVideoEngineModel;
@protocol TTVideoEngineGearStrategyDelegate;

@interface TTVideoEngineGearContext : NSObject {
    id<TTVideoEngineGearStrategyDelegate> _gearDelegate;
    TTVideoEngineModel *_videoModel;
    id _userData;
}

@property (weak, nonatomic) id<TTVideoEngineGearStrategyDelegate> gearDelegate;
@property (retain, nonatomic) TTVideoEngineModel *videoModel;
@property (retain, nonatomic) id userData;

- (id)videoModel;
- (void)setVideoModel:(id)arg0;
- (void)setGearDelegate:(id)arg0;
- (id)gearDelegate;
- (void).cxx_destruct;
- (id)userData;
- (void)setUserData:(id)arg0;

@end
