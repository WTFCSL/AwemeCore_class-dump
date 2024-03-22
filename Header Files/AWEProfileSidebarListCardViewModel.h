//
//     Generated by private class-dump
//

@class NSArray, AWEProfileSidebarCardModel, NSString, AWEProfileSidebarContext;
@protocol AWEProfileSidebarViewModelProtocol;

@interface AWEProfileSidebarListCardViewModel : NSObject <AWEProfileSidebarViewModelProtocol, AWEProfileSidebarCardViewModelProtocol> {
    AWEProfileSidebarCardModel *_model;
    AWEProfileSidebarContext *_context;
    double _height;
    double _speratorHeight;
    double _contentHeight;
    NSArray *_childViewModels;
    long long _index;
    id<AWEProfileSidebarViewModelProtocol> _parentViewModel;
}

@property (retain, nonatomic) AWEProfileSidebarCardModel *model;
@property (retain, nonatomic) AWEProfileSidebarContext *context;
@property (nonatomic) double height;
@property (nonatomic) double speratorHeight;
@property (nonatomic) double contentHeight;
@property (retain, nonatomic) NSArray *childViewModels;
@property (nonatomic) long long index;
@property (weak, nonatomic) id<AWEProfileSidebarViewModelProtocol> parentViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)verifyWithModel:(id)arg0 context:(id)arg1;

- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0 model:(id)arg1 collectionViewSize:(struct CGSize { double x0; double x1; })arg2;
- (Class)cellClassForModel:(id)arg0 index:(long long)arg1;
- (id)parentViewModel;
- (void)setParentViewModel:(id)arg0;
- (void)setChildViewModels:(id)arg0;
- (id)childViewModels;
- (double)speratorHeight;
- (void)setSperatorHeight:(double)arg0;
- (void)updateHeight;
- (void)setModel:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void).cxx_destruct;
- (double)contentHeight;
- (double)height;
- (void)setContext:(id)arg0;
- (id)model;
- (long long)index;
- (id)context;
- (void)setHeight:(double)arg0;
- (void)setContentHeight:(double)arg0;
- (void)onInit;
- (id)identify;

@end