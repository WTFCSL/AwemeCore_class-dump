//
//     Generated by private class-dump
//

@interface AWEProgressUIConfigBuilder : NSObject

+ (id)configsWithScene:(unsigned long long)arg0 model:(id)arg1 referString:(id)arg2 outerContext:(id)arg3;
+ (id)progressViewUIConfigWithScene:(unsigned long long)arg0 model:(id)arg1 referString:(id)arg2 outerContext:(id)arg3;
+ (id)decoratorViewStatusConfigWithScene:(unsigned long long)arg0 model:(id)arg1 referString:(id)arg2 outerContext:(id)arg3;
+ (id)timeIndicatorUIConfigWithScene:(unsigned long long)arg0 model:(id)arg1 referString:(id)arg2;
+ (id)previewViewUIConfigWithScene:(unsigned long long)arg0 model:(id)arg1 referString:(id)arg2;
+ (id)relatedVideoProgressViewConfigModel:(id)arg0 referString:(id)arg1 outerContext:(id)arg2;
+ (id)relatedVideoTimeIndicatorUIConfigWithModel:(id)arg0 referString:(id)arg1;
+ (id)relatedVideoPreviewViewUIConfigModel:(id)arg0 referString:(id)arg1;
+ (id)relatedVideoDecoratorViewUIConfigWithModel:(id)arg0 referString:(id)arg1 outerContext:(id)arg2;
+ (unsigned long long)decoratorBizType:(id)arg0 referString:(id)arg1 context:(id)arg2;
+ (unsigned long long)decoratorTypeWithBiz:(unsigned long long)arg0 model:(id)arg1 referString:(id)arg2 context:(id)arg3;
+ (id)decoratorDotInfos:(id)arg0 decoratorType:(unsigned long long)arg1 bizType:(unsigned long long)arg2;
+ (id)decoratorStatusConfig:(id)arg0 decoratorType:(unsigned long long)arg1 bizType:(unsigned long long)arg2;
+ (BOOL)shouldShowTryWatchViewDot:(id)arg0 referString:(id)arg1 context:(id)arg2;
+ (BOOL)shouldShowVideoHeadTailView:(id)arg0 referString:(id)arg1 context:(id)arg2;
+ (id)dotInfoForTryWatchView:(id)arg0;
+ (id)dotInfoForVideoHeadTailView:(id)arg0;

@end
