//
//     Generated by private class-dump
//

@class AWEPlayInteractionBaseElement, AWEVideoTypeTagView, NSString;

@interface AWESlidesTagComponent : NSObject <AFDVideoTagsProtocol> {
    AWEPlayInteractionBaseElement *clickDelegate;
    AWEVideoTypeTagView *_slidesTagView;
}

@property (retain, nonatomic) AWEVideoTypeTagView *slidesTagView;
@property (weak, nonatomic) AWEPlayInteractionBaseElement *clickDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)albumTagImageName;
+ (BOOL)needShowSlidesTagViewWithModel:(id)arg0;
+ (void)updateTagViewModel:(id)arg0 withAwemeModel:(id)arg1;

- (id)clickDelegate;
- (void)setClickDelegate:(id)arg0;
- (long long)tagWidth;
- (BOOL)needShowWithModel:(id)arg0;
- (BOOL)currentTagNeedPlaceHolder;
- (void)onRichAwemeTagClicked:(id)arg0;
- (id)slidesTagView;
- (void)setSlidesTagView:(id)arg0;
- (void).cxx_destruct;
- (void)updateWithModel:(id)arg0;
- (id)tagView;

@end