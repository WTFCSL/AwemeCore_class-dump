//
//     Generated by private class-dump
//

@class NSDictionary;

@interface AWEPlayInteractionLikeLoginGuideManager : NSObject {
    BOOL _configured;
    NSDictionary *_likeLoginConfig;
}

@property (copy, nonatomic) NSDictionary *likeLoginConfig;
@property (nonatomic) BOOL configured;

+ (id)sharedManager;

- (id)likeLoginConfig;
- (BOOL)canShowLogin;
- (void)recordLikeLogin;
- (BOOL)halfScreenLogin;
- (void)setLikeLoginConfig:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (BOOL)configured;
- (void)setConfigured:(BOOL)arg0;

@end