//
//     Generated by private class-dump
//

@interface AWEKnowledgeSwiftBasic.FullPageBaseItemController : NSObject <AWEKnowledgeSwiftBasic.FullPageBaseItemControllerProtocol> {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ height;
    void /* unknown type, empty encoding */ getSectionContainerBlock;
    void /* unknown type, empty encoding */ heightDidChangeBlock;
    void /* unknown type, empty encoding */ requireLoginBlock;
}

@property (nonatomic, retain) void /* unknown type, empty encoding */ viewModel;
@property (nonatomic) void /* unknown type, empty encoding */ height;
@property (nonatomic, copy) id /* block */ getSectionContainerBlock;
@property (nonatomic, copy) id /* block */ heightDidChangeBlock;
@property (nonatomic, copy) id /* block */ requireLoginBlock;

- (void)viewControllerDidAppear:(BOOL)arg0;
- (void)viewControllerDidDisappear:(BOOL)arg0;
- (id /* block */)getSectionContainerBlock;
- (void)setGetSectionContainerBlock:(id /* block */)arg0;
- (id /* block */)heightDidChangeBlock;
- (void)setHeightDidChangeBlock:(id /* block */)arg0;
- (id /* block */)requireLoginBlock;
- (void)setRequireLoginBlock:(id /* block */)arg0;
- (void)sectionControllerWillDisplay;
- (void)sectionControllerDidEndDisplaying;
- (void)configCellWithCell:(id)arg0 viewModel:(id)arg1;
- (void)cellWillDisplayWithCell:(id)arg0 viewModel:(id)arg1;
- (void)cellDidEndDisplayWithCell:(id)arg0 viewModel:(id)arg1;
- (id)init;
- (void).cxx_destruct;
- (double)height;
- (id)initWithViewModel:(id)arg0;
- (Class)cellClass;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setHeight:(double)arg0;

@end
