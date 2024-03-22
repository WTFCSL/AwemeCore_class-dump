//
//     Generated by private class-dump
//

@class NSString, UIView;

@interface IESGCPSegmentSliderNodeViewItem : NSObject <IESGCPSegmentSliderNodeViewItemProtocol> {
    BOOL _isAppeared;
    unsigned long long _nodeViewType;
    UIView *_nodeView;
    id /* block */ _isAppearedBlock;
    id /* block */ _appearedStatusChangeBlock;
    double _nodeViewMaxY;
}

@property (nonatomic) double nodeViewMaxY;
@property (nonatomic) BOOL isAppeared;
@property (nonatomic) unsigned long long nodeViewType;
@property (weak, nonatomic) UIView *nodeView;
@property (copy, nonatomic) id /* block */ isAppearedBlock;
@property (copy, nonatomic) id /* block */ appearedStatusChangeBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsAppeared:(BOOL)arg0;
- (void)setNodeViewType:(unsigned long long)arg0;
- (unsigned long long)nodeViewType;
- (void)setNodeView:(id)arg0;
- (id /* block */)isAppearedBlock;
- (void)setIsAppearedBlock:(id /* block */)arg0;
- (id /* block */)appearedStatusChangeBlock;
- (void)setAppearedStatusChangeBlock:(id /* block */)arg0;
- (double)nodeViewMaxY;
- (void)setNodeViewMaxY:(double)arg0;
- (void).cxx_destruct;
- (BOOL)isAppeared;
- (id)nodeView;

@end