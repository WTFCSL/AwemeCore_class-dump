//
//     Generated by private class-dump
//

@class NSString;

@interface AWENovelChannelReport : NSObject {
    NSString *_urlPath;
    double _beginLoadTemplateTime;
}

@property (copy, nonatomic) NSString *urlPath;
@property (nonatomic) double beginLoadTemplateTime;

- (void)reportEvent:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3;
- (void)setUrlPath:(id)arg0;
- (void)setBeginLoadTemplateTime:(double)arg0;
- (double)beginLoadTemplateTime;
- (id)getEventName:(id)arg0;
- (id)mergeWithCommonCategory:(id)arg0;
- (void)reportEvent:(id)arg0 metric:(id)arg1 category:(id)arg2 extra:(id)arg3 maySample:(BOOL)arg4;
- (void)renderTemplateFailWithBlankStatus:(BOOL)arg0 hasLoading:(BOOL)arg1;
- (void)refreshChannelSpan:(long long)arg0;
- (void)renderTemplateFail:(long long)arg0 errMsg:(id)arg1;
- (void)firstScreenLynxSpanFromTapChannel;
- (void)loadTemplate:(id)arg0 type:(id)arg1 fetchType:(long long)arg2;
- (void)firstScreenLynxSpanFromLoadTemplate;
- (id)init;
- (void).cxx_destruct;
- (id)urlPath;
- (void)startMonitor;
- (id)initWithUrl:(id)arg0;

@end
