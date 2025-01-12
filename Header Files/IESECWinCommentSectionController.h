//
//     Generated by private class-dump
//

@class IESECWinCommentCell, IESECServiceProxy, FBKVOController, IESECWinCommentObject;
@protocol IESECWinMainScrollService, IESECWinAuthorService, IESECWinBackService, IESECWinSplitService;

@interface IESECWinCommentSectionController : IESECWinListKitCellController {
    FBKVOController *_kvoCtrl;
    IESECWinCommentObject *_object;
    IESECWinCommentCell *_commentCell;
    IESECServiceProxy<IESECWinBackService> *_backService;
    IESECServiceProxy<IESECWinAuthorService> *_authorService;
    IESECServiceProxy<IESECWinSplitService> *_splitService;
    IESECServiceProxy<IESECWinMainScrollService> *_scrollService;
}

@property (retain, nonatomic) FBKVOController *kvoCtrl;
@property (retain, nonatomic) IESECWinCommentObject *object;
@property (weak, nonatomic) IESECWinCommentCell *commentCell;
@property (retain, nonatomic) IESECServiceProxy<IESECWinBackService> *backService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinAuthorService> *authorService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinSplitService> *splitService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinMainScrollService> *scrollService;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)didUpdateToObject:(id)arg0;
- (id)kvoCtrl;
- (void)setKvoCtrl:(id)arg0;
- (id)commentCell;
- (void)setCommentCell:(id)arg0;
- (id)configWithCell:(id)arg0;
- (id)scrollService;
- (id)splitService;
- (void)setSplitService:(id)arg0;
- (void)setScrollService:(id)arg0;
- (id)authorService;
- (id)getNewStyleReputationTrackParams;
- (void)trackAuthorInfoClick:(id)arg0;
- (id)backService;
- (void)setBackService:(id)arg0;
- (void)setAuthorService:(id)arg0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)object;
- (void)scrollViewDidScroll;
- (void)addObserver;
- (void)setObject:(id)arg0;
- (void)didSelectItemAtIndex:(long long)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
