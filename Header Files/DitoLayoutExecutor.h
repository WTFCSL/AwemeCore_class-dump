//
//     Generated by private class-dump
//

@protocol DitoLayoutExecutorDataSource;

@interface DitoLayoutExecutor : NSObject {
    id<DitoLayoutExecutorDataSource> _dataSource;
}

@property (weak, nonatomic) id<DitoLayoutExecutorDataSource> dataSource;

- (id)placeholderLayout;
- (id)nextSubNodeIfNeedLayout:(id)arg0 nodeMap:(id)arg1 layoutMap:(id)arg2;
- (void)nodeDidLayout:(id)arg0 layout:(id)arg1 nodeMap:(id)arg2 layoutMap:(id)arg3;
- (void)appendNodeBottomMarign:(id)arg0 layout:(id)arg1 nodeMap:(id)arg2 layoutMap:(id)arg3;
- (id)nextSubNodeIfAppendBottomMargin:(id)arg0 nodeMap:(id)arg1 didBuildNodeMap:(id)arg2;
- (void)layoutContainerNode:(id)arg0 containerWidth:(double)arg1 nodeMap:(id)arg2;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;

@end
