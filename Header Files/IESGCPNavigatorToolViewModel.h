//
//     Generated by private class-dump
//

@class NSString;
@protocol IESGCPNavigatorToolViewDataSource;

@interface IESGCPNavigatorToolViewModel : NSObject <IESGCPNavigatorToolViewDataSource> {
    id<IESGCPNavigatorToolViewDataSource> _dataSource;
}

@property (weak, nonatomic) id<IESGCPNavigatorToolViewDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })toolViewSize;
- (double)toolViewWidth;
- (double)toolViewHeight;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })toolViewEdges;
- (id)toolItems;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;

@end