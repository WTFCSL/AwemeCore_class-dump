//
//     Generated by private class-dump
//

@class NSString;

@interface AWELiveLeaveSceneDesktopEvadeManager : NSObject <AWEUGSceneDesktopChannelGuideEvadeProtocol> {
    NSString *_sceneType;
    NSString *_enterFrom;
}

@property (copy, nonatomic) NSString *sceneType;
@property (copy, nonatomic) NSString *enterFrom;

+ (id)sharedInstance;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (BOOL)shouldDesktopChannelGuideEvadeWithScene:(id)arg0 enterFrom:(id)arg1;
- (void).cxx_destruct;
- (id)sceneType;
- (void)setSceneType:(id)arg0;

@end
