//
//     Generated by private class-dump
//

@interface AWENovelLynxUtil : BDNovelBaseLynxUtil

+ (id)novelLynxConfig;
+ (BOOL)lynxNovelChannelEnable;
+ (void)setLynxNovelChannelEnable:(BOOL)arg0;
+ (BOOL)lynxCheckBlankEnable;
+ (BOOL)lynxMonitorSDKCheckBlankEnable;
+ (id)lynxBlankCheckList;

- (id)createLynxViewWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 url:(id)arg1 delegate:(id)arg2;

@end