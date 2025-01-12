//
//     Generated by private class-dump
//

@class NSTimer, NSMutableArray;

@interface BDWKWebViewKeeper : NSObject {
    float _keepTs;
    NSMutableArray *_webViewList;
    NSTimer *_timer;
}

@property (retain, nonatomic) NSMutableArray *webViewList;
@property (nonatomic) float keepTs;
@property (retain, nonatomic) NSTimer *timer;

+ (id)shareInstance;

- (void)setWebViewList:(id)arg0;
- (id)webViewList;
- (float)keepTs;
- (void)checkWebList;
- (void)keepWebView:(id)arg0;
- (void)setKeepTs:(float)arg0;
- (id)timer;
- (void).cxx_destruct;
- (void)setTimer:(id)arg0;

@end
