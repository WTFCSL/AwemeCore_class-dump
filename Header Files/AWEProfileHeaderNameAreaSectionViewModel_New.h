//
//     Generated by private class-dump
//

@class NSString, AWERLComponentTree, AWEProfileHeaderContext, AWEProfileHeaderNameAreaComponent;

@interface AWEProfileHeaderNameAreaSectionViewModel_New : AWEBaseListSectionViewModel <AWEUserMessage, AWEProfileHeaderSectionViewModelProtocol> {
    AWERLComponentTree *_componentTree;
    AWEProfileHeaderContext *_context;
    double _footerHeight;
    double _maxWidth;
    double _previousScreenWidth;
    AWEProfileHeaderNameAreaComponent *_nameAreaComponent;
}

@property (nonatomic) double maxWidth;
@property (nonatomic) double footerHeight;
@property (nonatomic) double previousScreenWidth;
@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (retain, nonatomic) AWEProfileHeaderNameAreaComponent *nameAreaComponent;
@property (retain, nonatomic) AWERLComponentTree *componentTree;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } sectionSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)arg0;
- (double)bottomPaddingWithLowerSection:(long long)arg0;
- (id)componentTree;
- (void)setComponentTree:(id)arg0;
- (void)refreshSection;
- (void)updateMaxWidth;
- (void)setupComponentTree;
- (void)updateComponentTree;
- (void)computeFitSizeIfNeeded;
- (id)nameAreaComponent;
- (void)setPreviousScreenWidth:(double)arg0;
- (double)previousScreenWidth;
- (void)setNameAreaComponent:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setMaxWidth:(double)arg0;
- (long long)sectionType;
- (void)setContext:(id)arg0;
- (double)maxWidth;
- (id)context;
- (void)setFooterHeight:(double)arg0;
- (struct CGSize { double x0; double x1; })sectionSize;
- (double)footerHeight;

@end