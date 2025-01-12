//
//     Generated by private class-dump
//

@class NSString, AWEPOIEntryViewLayout, AWEPOIItemAnchorTag;

@interface AWEPOIEntryViewReuseViewNormalLabel : UILabel <AWEPOIEntryViewReuseViewProtocol> {
    long long _scene;
    AWEPOIEntryViewLayout *_layout;
    AWEPOIItemAnchorTag *_item;
}

@property (nonatomic) long long scene;
@property (retain, nonatomic) AWEPOIEntryViewLayout *layout;
@property (retain, nonatomic) AWEPOIItemAnchorTag *item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithItem:(id)arg0 entryViewScene:(long long)arg1 isBGColorWhite:(BOOL)arg2 entryViewLayout:(id)arg3;
- (id)item;
- (id)init;
- (void)setLayout:(id)arg0;
- (void)setScene:(long long)arg0;
- (void).cxx_destruct;
- (id)layout;
- (long long)scene;
- (void)setItem:(id)arg0;
- (double)viewHeight;
- (double)viewWidth;

@end
