//
//     Generated by private class-dump
//

@class IESECLiveIconsContentGroupView, NSString, IESECLiveReplayDataStore;

@interface IESECLiveReplayRitTagView : UIView <IESECLiveReplayComponentViewProtocol> {
    IESECLiveReplayDataStore *_dataStore;
    id /* block */ _tagTotalWidthDidUpdate;
    IESECLiveIconsContentGroupView *_ritsTagView;
}

@property (retain, nonatomic) IESECLiveIconsContentGroupView *ritsTagView;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (copy, nonatomic) id /* block */ tagTotalWidthDidUpdate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dataStoreChanged;
- (void)clickUserRightsView:(id)arg0;
- (id)ritsTagView;
- (id /* block */)tagTotalWidthDidUpdate;
- (void)setTagTotalWidthDidUpdate:(id /* block */)arg0;
- (void)setRitsTagView:(id)arg0;
- (void)update:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setDataStore:(id)arg0;
- (id)dataStore;
- (void)setupUI;

@end
