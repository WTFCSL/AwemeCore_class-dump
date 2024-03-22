//
//     Generated by private class-dump
//

@class UIFont, NSString, UIColor, NSDictionary, UIView, NSMutableArray;
@protocol ACCTextInputControllerDelegate, ACCUserPickerConfigProtocol;

@protocol ACCTextInputControllerProtocol <NSObject>

@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) unsigned long long maxUserCount;
@property (weak, nonatomic) id<ACCTextInputControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *extraInfo;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *extraColor;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *referString;
@property (nonatomic) BOOL enableHashTagDetection;
@property (copy, nonatomic) id /* block */ risingInputViewBlock;
@property (copy, nonatomic) id /* block */ showUserPickerCallback;
@property (copy, nonatomic) id /* block */ plainTextBlock;
@property (copy, nonatomic) id /* block */ encodeEmoticonBlock;
@property (copy, nonatomic) id /* block */ encodeHotSpotTagBlock;
@property (copy, nonatomic) NSDictionary *hashtagRecommendParam;
@property (nonatomic) BOOL enableSelectionHashTag;
@property (nonatomic) BOOL enableLineSpacing;
@property (retain, nonatomic) id<ACCUserPickerConfigProtocol> pickerConfig;
@property (retain, nonatomic) UIView *expediteMentionContainerView;
@property (nonatomic) BOOL mentionListLoadMoreAtTracking;
@property (copy, nonatomic) NSDictionary *mentionListCommomTrackParams;
@property (nonatomic) BOOL cutFlag;
@property (nonatomic) BOOL disableAt;

- (void)setExtraInfo:(id)arg0;
- (id)referString;
- (void)addExtraAtEnd:(id)arg0;
- (void)setReferString:(id)arg0;
- (BOOL)textInput:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)updateDisplay;
- (void)clearInputData;
- (long long)plainTextAndAttributeDiff:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (id)updateExtraInfo:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)setExtraColor:(id)arg0;
- (void)setPlainTextBlock:(id /* block */)arg0;
- (void)setEncodeEmoticonBlock:(id /* block */)arg0;
- (void)setEnableLineSpacing:(BOOL)arg0;
- (void)setMaxUserCount:(unsigned long long)arg0;
- (id)extraColor;
- (BOOL)enableHashTagDetection;
- (void)setEnableHashTagDetection:(BOOL)arg0;
- (id /* block */)risingInputViewBlock;
- (void)setRisingInputViewBlock:(id /* block */)arg0;
- (id /* block */)showUserPickerCallback;
- (void)setShowUserPickerCallback:(id /* block */)arg0;
- (id /* block */)plainTextBlock;
- (id /* block */)encodeEmoticonBlock;
- (id /* block */)encodeHotSpotTagBlock;
- (void)setEncodeHotSpotTagBlock:(id /* block */)arg0;
- (id)hashtagRecommendParam;
- (void)setHashtagRecommendParam:(id)arg0;
- (BOOL)enableSelectionHashTag;
- (void)setEnableSelectionHashTag:(BOOL)arg0;
- (BOOL)enableLineSpacing;
- (id)expediteMentionContainerView;
- (void)setExpediteMentionContainerView:(id)arg0;
- (BOOL)mentionListLoadMoreAtTracking;
- (void)setMentionListLoadMoreAtTracking:(BOOL)arg0;
- (id)mentionListCommomTrackParams;
- (void)setMentionListCommomTrackParams:(id)arg0;
- (BOOL)cutFlag;
- (void)setCutFlag:(BOOL)arg0;
- (void)addSelectedHashTag:(id)arg0;
- (void)showUserPicker:(id)arg0;
- (void)showUserPicker:(id)arg0 enterMethod:(id)arg1;
- (void)trimCharactersInSet:(id)arg0;
- (void)textInputValueChanged;
- (void)textInput:(id)arg0 didSelectSuggestion:(id)arg1 withTextBeforeSelection:(id)arg2;
- (id)resolveHashTags;
- (void)didSelectSearchUser:(id)arg0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 trackInfo:(id)arg2;
- (void)didSelectHotSpotWords:(id)arg0 hotSpotId:(id)arg1;
- (void)deselectHotSpot;
- (id)attributeStringFromString:(id)arg0 extraInfo:(id)arg1;
- (void)setPickerConfig:(id)arg0;
- (id)pickerConfig;
- (void)textInputDidChangeSelection:(id)arg0;
- (id)searchString;
- (void)setSearchString:(id)arg0;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (id)delegate;
- (id)font;
- (void)setMaxLength:(unsigned long long)arg0;
- (void)setFont:(id)arg0;
- (void)setTextColor:(id)arg0;
- (void)setDelegate:(id)arg0;
- (unsigned long long)maxLength;
- (id)textColor;
- (id)extraInfo;
- (void)appendCharacter:(id)arg0;
- (unsigned long long)maxUserCount;

@optional

- (BOOL)disableAt;
- (void)setDisableAt:(BOOL)arg0;

@end