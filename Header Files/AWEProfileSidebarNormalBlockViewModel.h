//
//     Generated by private class-dump
//

@class AWEProfileSidebarContext, AWEProfileSidebarBlockModel, NSString;
@protocol AWEProfileSidebarRootViewModelProtocol;

@interface AWEProfileSidebarNormalBlockViewModel : AWEBaseListSectionViewModel <AWEProfileSidebarViewModelProtocol> {
    BOOL _shouldHideHeaderTitle;
    AWEProfileSidebarBlockModel *_model;
    AWEProfileSidebarContext *_context;
    double _height;
    double _headerHeight;
    NSString *_headerTitle;
    long long _index;
    id<AWEProfileSidebarRootViewModelProtocol> _parentViewModel;
}

@property (retain, nonatomic) AWEProfileSidebarBlockModel *model;
@property (retain, nonatomic) AWEProfileSidebarContext *context;
@property (nonatomic) double height;
@property (nonatomic) double headerHeight;
@property (copy, nonatomic) NSString *headerTitle;
@property (nonatomic) long long index;
@property (weak, nonatomic) id<AWEProfileSidebarRootViewModelProtocol> parentViewModel;
@property (nonatomic) BOOL shouldHideHeaderTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)verifyWithModel:(id)arg0 context:(id)arg1;

- (void)updateHeaderHeight;
- (id)parentViewModel;
- (void)setParentViewModel:(id)arg0;
- (BOOL)shouldHideHeaderTitle;
- (void)setShouldHideHeaderTitle:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void)setHeaderTitle:(id)arg0;
- (id)headerTitle;
- (void).cxx_destruct;
- (double)height;
- (void)setContext:(id)arg0;
- (id)model;
- (long long)index;
- (id)context;
- (double)headerHeight;
- (void)setHeight:(double)arg0;
- (void)updateHeaderTitle;
- (void)setHeaderHeight:(double)arg0;
- (void)onInit;
- (id)identify;

@end
