//
//     Generated by private class-dump
//

@protocol IESECYataRecommendContainer <NSObject>

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })viewPortOnWindow;
- (void)reloadRecommendSection;
- (double)recommendCellHeight;
- (id)recommendExtraParams;
- (id)recommendURLString;
- (id)eventNameGULDidShow;
- (void)recommendScrollDidCreatedWith:(BOOL)arg0;
- (void)loadFinishWith:(BOOL)arg0 error:(id)arg1 isLynxRecommend:(BOOL)arg2;
- (long long)pageType;

@optional

- (BOOL)enableStraightOut;

@end