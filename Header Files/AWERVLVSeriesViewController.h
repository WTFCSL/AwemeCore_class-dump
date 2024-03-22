//
//     Generated by private class-dump
//

@class NSArray, NSString, AWERVLVSeriesView;
@protocol AWERVLVSelectDelegate;

@interface AWERVLVSeriesViewController : AWERVMetaPanelViewController <UIGestureRecognizerDelegate, AWERVLVSelectDelegate> {
    id<AWERVLVSelectDelegate> _delegate;
    id /* block */ _seriesCloseBlock;
    AWERVLVSeriesView *_seriesView;
    NSArray *_albumModelList;
}

@property (retain, nonatomic) AWERVLVSeriesView *seriesView;
@property (retain, nonatomic) NSArray *albumModelList;
@property (weak, nonatomic) id<AWERVLVSelectDelegate> delegate;
@property (copy, nonatomic) id /* block */ seriesCloseBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectAlbum:(id)arg0;
- (void)setAlbumModelList:(id)arg0;
- (id)albumModelList;
- (void)setSeriesCloseBlock:(id /* block */)arg0;
- (void)refreshModel:(id)arg0 currentSelectIndex:(long long)arg1;
- (id)panelContentView;
- (id)seriesView;
- (void)setSeriesView:(id)arg0;
- (id /* block */)seriesCloseBlock;
- (void).cxx_destruct;
- (id)delegate;
- (id)contentScrollView;
- (void)setDelegate:(id)arg0;
- (void)closeButtonTapped;

@end