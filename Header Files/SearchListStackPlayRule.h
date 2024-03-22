//
//     Generated by private class-dump
//

@class NSString, AWESearchAutoPlayHandler;

@interface SearchListStackPlayRule : NSObject <AWESearchAutoPlayRuleProtocol> {
    AWESearchAutoPlayHandler *_handler;
    double _disappearWidth;
}

@property (nonatomic) double disappearWidth;
@property (weak, nonatomic) AWESearchAutoPlayHandler *handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getAutoPlayViewFromViews:(id)arg0 inContainer:(id)arg1 contentOffset:(struct CGPoint { double x0; double x1; })arg2 directionPoint:(struct CGPoint { double x0; double x1; })arg3 speedPoint:(struct CGPoint { double x0; double x1; })arg4;
- (void)setDisappearWidth:(double)arg0;
- (double)disappearWidth;
- (void).cxx_destruct;
- (void)setHandler:(id)arg0;
- (id)handler;
- (unsigned long long)ruleType;

@end