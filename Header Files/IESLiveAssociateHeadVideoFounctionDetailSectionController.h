//
//     Generated by private class-dump
//

@class NSString, IESLiveAssociateHeadVideoFoundationDetailItem;

@interface IESLiveAssociateHeadVideoFounctionDetailSectionController : IGListSectionController <IGListSupplementaryViewSource, IGListDisplayDelegate, IGListAdapterDelegate> {
    BOOL _firstShow;
    BOOL _hasToBottom;
    IESLiveAssociateHeadVideoFoundationDetailItem *_object;
}

@property (retain, nonatomic) IESLiveAssociateHeadVideoFoundationDetailItem *object;
@property (nonatomic) BOOL firstShow;
@property (nonatomic) BOOL hasToBottom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)arg0;
- (void)listAdapter:(id)arg0 willDisplayObject:(id)arg1 atIndex:(long long)arg2;
- (void)listAdapter:(id)arg0 didEndDisplayingObject:(id)arg1 atIndex:(long long)arg2;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)arg0 atIndex:(long long)arg1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)arg0 atIndex:(long long)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1;
- (void)listAdapter:(id)arg0 willDisplaySectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)listAdapter:(id)arg0 didEndDisplayingSectionController:(id)arg1 cell:(id)arg2 atIndex:(long long)arg3;
- (void)didUpdateToObject:(id)arg0;
- (void)setFirstShow:(BOOL)arg0;
- (BOOL)firstShow;
- (BOOL)hasToBottom;
- (void)setHasToBottom:(BOOL)arg0;
- (id)initWithFirstShow:(BOOL)arg0;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (id)object;
- (void)setObject:(id)arg0;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)arg0;

@end
