//
//     Generated by private class-dump
//

@class UIFont, NSTimer, AWEUserExpediteMentionViewController, NSString, UIView, AWEUserPickerConfig, NSDictionary, AWEChallengeInterveneListResponse, NSMutableArray, NSRegularExpression, UIColor;
@protocol AWETextInputControllerDelegate, AWETextInput;

@interface AWETextInputController : NSObject <AWEUserPickerViewControllerDelegate, UITextViewDelegate, UITextFieldDelegate, AWEUserExpediteMentionViewControllerDelegate, AWETextInputControllerProtocol> {
    BOOL _enableInputTimeExtra;
    BOOL _enableHashTagDetection;
    BOOL _disableAt;
    BOOL _enableSelectionHashTag;
    BOOL _enableLineSpacing;
    BOOL _mentionListLoadMoreAtTracking;
    BOOL _cutFlag;
    BOOL _hasRequestInterveneHashTag;
    BOOL _atFromKeyboard;
    BOOL _userPickerIsShowing;
    unsigned long long _maxLength;
    unsigned long long _maxUserCount;
    id<AWETextInputControllerDelegate> _delegate;
    NSMutableArray *_extraInfo;
    NSString *_searchString;
    UIFont *_font;
    UIColor *_textColor;
    UIColor *_extraColor;
    NSString *_itemID;
    NSString *_referString;
    NSString *_enterFrom;
    id /* block */ _risingInputViewBlock;
    id /* block */ _showUserPickerCallback;
    id /* block */ _plainTextBlock;
    id /* block */ _encodeEmoticonBlock;
    id /* block */ _encodeMusicHighlightBlock;
    id /* block */ _encodeHotSpotTagBlock;
    NSDictionary *_hashtagRecommendParam;
    double _lineSpacing;
    long long _indexForUserPositionInMentionShowList;
    UIView *_expediteMentionContainerView;
    NSDictionary *_mentionListCommomTrackParams;
    NSString *_commentAtEnterMethod;
    AWEUserPickerConfig *_pickerConfig;
    id<AWETextInput> _textInput;
    NSTimer *_suggestionDelayTimer;
    NSRegularExpression *_hashTagRegExp;
    NSRegularExpression *_endWithHashTagRegExp;
    AWEChallengeInterveneListResponse *_interveneResponse;
    NSMutableArray *_selectedHashTags;
    AWEUserExpediteMentionViewController *_userExpediteMentionVC;
    struct _NSRange { unsigned long long location; unsigned long long length; } _range;
    struct _NSRange { unsigned long long location; unsigned long long length; } _lastMarkedRange;
}

@property (weak, nonatomic) id<AWETextInput> textInput;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } lastMarkedRange;
@property (retain, nonatomic) NSTimer *suggestionDelayTimer;
@property (retain, nonatomic) NSRegularExpression *hashTagRegExp;
@property (retain, nonatomic) NSRegularExpression *endWithHashTagRegExp;
@property (nonatomic) BOOL hasRequestInterveneHashTag;
@property (retain, nonatomic) AWEChallengeInterveneListResponse *interveneResponse;
@property (nonatomic) BOOL atFromKeyboard;
@property (nonatomic) BOOL userPickerIsShowing;
@property (retain, nonatomic) NSMutableArray *selectedHashTags;
@property (retain, nonatomic) AWEUserExpediteMentionViewController *userExpediteMentionVC;
@property (nonatomic) BOOL enableInputTimeExtra;
@property (nonatomic) unsigned long long maxLength;
@property (nonatomic) unsigned long long maxUserCount;
@property (weak, nonatomic) id<AWETextInputControllerDelegate> delegate;
@property (retain, nonatomic) NSMutableArray *extraInfo;
@property (retain, nonatomic) NSString *searchString;
@property (retain, nonatomic) UIFont *font;
@property (retain, nonatomic) UIColor *textColor;
@property (retain, nonatomic) UIColor *extraColor;
@property (retain, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSString *referString;
@property (retain, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL enableHashTagDetection;
@property (nonatomic) BOOL disableAt;
@property (copy, nonatomic) id /* block */ risingInputViewBlock;
@property (copy, nonatomic) id /* block */ showUserPickerCallback;
@property (copy, nonatomic) id /* block */ plainTextBlock;
@property (copy, nonatomic) id /* block */ encodeEmoticonBlock;
@property (copy, nonatomic) id /* block */ encodeMusicHighlightBlock;
@property (copy, nonatomic) id /* block */ encodeHotSpotTagBlock;
@property (copy, nonatomic) NSDictionary *hashtagRecommendParam;
@property (nonatomic) BOOL enableSelectionHashTag;
@property (nonatomic) BOOL enableLineSpacing;
@property (nonatomic) double lineSpacing;
@property (nonatomic) long long indexForUserPositionInMentionShowList;
@property (retain, nonatomic) UIView *expediteMentionContainerView;
@property (nonatomic) BOOL mentionListLoadMoreAtTracking;
@property (copy, nonatomic) NSDictionary *mentionListCommomTrackParams;
@property (retain, nonatomic) NSString *commentAtEnterMethod;
@property (retain, nonatomic) AWEUserPickerConfig *pickerConfig;
@property (nonatomic) BOOL cutFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setExtraInfo:(id)arg0;
- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)addExtraAtEnd:(id)arg0;
- (void)addExtraAtEnd:(id)arg0 addedFromExternal:(BOOL)arg1;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (void)textInputValueChanged:(id)arg0;
- (BOOL)textInput:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)updateDisplay;
- (void)clearInputData;
- (long long)plainTextAndAttributeDiff:(id)arg0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (id)updateExtraInfo:(id)arg0 withRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (void)setEnableInputTimeExtra:(BOOL)arg0;
- (void)setExtraColor:(id)arg0;
- (void)setPlainTextBlock:(id /* block */)arg0;
- (void)setEncodeEmoticonBlock:(id /* block */)arg0;
- (void)setEnableLineSpacing:(BOOL)arg0;
- (void)setMaxUserCount:(unsigned long long)arg0;
- (BOOL)enableInputTimeExtra;
- (id)extraColor;
- (BOOL)enableHashTagDetection;
- (void)setEnableHashTagDetection:(BOOL)arg0;
- (id /* block */)risingInputViewBlock;
- (void)setRisingInputViewBlock:(id /* block */)arg0;
- (id /* block */)showUserPickerCallback;
- (void)setShowUserPickerCallback:(id /* block */)arg0;
- (id /* block */)plainTextBlock;
- (id /* block */)encodeEmoticonBlock;
- (id /* block */)encodeMusicHighlightBlock;
- (void)setEncodeMusicHighlightBlock:(id /* block */)arg0;
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
- (id)commentAtEnterMethod;
- (void)setCommentAtEnterMethod:(id)arg0;
- (long long)indexForUserPositionInMentionShowList;
- (void)setIndexForUserPositionInMentionShowList:(long long)arg0;
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
- (void)didDeselectSearchUser:(id)arg0 searchRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)didSelectMusic:(id)arg0 atIndex:(long long)arg1;
- (void)didSelectHotSpotWords:(id)arg0 hotSpotId:(id)arg1;
- (void)deselectHotSpot;
- (id)attributeStringFromString:(id)arg0 extraInfo:(id)arg1;
- (BOOL)disableAt;
- (void)setDisableAt:(BOOL)arg0;
- (BOOL)string:(id)arg0 isSpaceAtIndex:(long long)arg1;
- (id)hashTagRegExp;
- (id)endWithHashTagRegExp;
- (void)setPickerConfig:(id)arg0;
- (id)pickerConfig;
- (id)selectedHashTags;
- (id)userExpediteMentionVC;
- (BOOL)willRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0 breakExtraInfo:(id)arg1;
- (BOOL)userPickerIsShowing;
- (void)setUserPickerIsShowing:(BOOL)arg0;
- (void)picker:(id)arg0 didPickUser:(id)arg1 submitTrack:(BOOL)arg2;
- (void)setAtFromKeyboard:(BOOL)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })plainRangeFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (BOOL)textInput:(id)arg0 processTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })lastMarkedRange;
- (void)setLastMarkedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (BOOL)hasDuetChainIn:(id)arg0;
- (BOOL)hasCommentChainIn:(id)arg0;
- (id)textRangeFromRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (BOOL)isValidDuetChainExtra:(id)arg0 inString:(id)arg1;
- (BOOL)isValidCommentChainExtra:(id)arg0 inString:(id)arg1;
- (long long)plainTextAndAttributeDiff:(id)arg0 plainRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (id)searchChallengeParamsWithKeyword:(id)arg0;
- (id)interveneHashTagParams;
- (void)setHasRequestInterveneHashTag:(BOOL)arg0;
- (void)setInterveneResponse:(id)arg0;
- (void)p_modifyAttributedStringForVideoReplyVideo:(id)arg0 originalString:(id)arg1 textExtra:(id)arg2;
- (void)correctStartForExtra:(id)arg0 inString:(id)arg1 toleration:(long long)arg2;
- (id)duetChainStringAttributes;
- (id)safePlainText;
- (void)updateExtraInfoByMarkedRange;
- (void)updateTextInput:(id)arg0;
- (void)ensureSpacesBesidesDuetChain;
- (void)ensureSpacesBesidesCommentChain;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })rangeFromTextRange:(id)arg0;
- (id)textStringForMatchHashTagWithInputText:(id)arg0;
- (id)suggestionDelayTimer;
- (void)reloadSuggestions:(id)arg0;
- (void)setSuggestionDelayTimer:(id)arg0;
- (void)checkExpediteMention;
- (void)asyncCheckTimeExtraBackgroundIfNeeded:(id)arg0 completedOnMain:(id /* block */)arg1;
- (BOOL)enableTimeExtraCheck:(id)arg0;
- (void)asyncMatchTimeExtraBackground:(id)arg0 completedOnMain:(id /* block */)arg1;
- (void)setUserExpediteMentionVC:(id)arg0;
- (void)removePrefixCharactersInSet:(id)arg0;
- (void)removeSuffixCharactersInSet:(id)arg0;
- (id)nameToInsertForUser:(id)arg0;
- (void)removeExistedHotSpotTag:(id)arg0 WithTextStr:(id)arg1;
- (BOOL)atFromKeyboard;
- (void)fetchInterveneHashTagWithCompletion:(id /* block */)arg0;
- (void)searchChallengeWithKeyword:(id)arg0 completion:(id /* block */)arg1;
- (void)picker:(id)arg0 didPickUser:(id)arg1;
- (void)expediteMentionDidSelectUser:(id)arg0 searchingMentionRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (void)searchRecommendChallenge:(id /* block */)arg0;
- (void)insertCandicate:(id)arg0 intoSuggestions:(id)arg1 atIndex:(long long)arg2;
- (void)setHashTagRegExp:(id)arg0;
- (void)setEndWithHashTagRegExp:(id)arg0;
- (BOOL)hasRequestInterveneHashTag;
- (id)interveneResponse;
- (void)setSelectedHashTags:(id)arg0;
- (void)textInputDidChangeSelection:(id)arg0;
- (id)searchString;
- (void)setSearchString:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })markedRange;
- (void).cxx_destruct;
- (void)setRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })range;
- (id)initWithTextView:(id)arg0;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (id)delegate;
- (id)font;
- (void)setMaxLength:(unsigned long long)arg0;
- (void)setFont:(id)arg0;
- (BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementString:(id)arg2;
- (void)setTextColor:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (unsigned long long)maxLength;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (id)textColor;
- (double)lineSpacing;
- (void)setLineSpacing:(double)arg0;
- (id)textInput;
- (void)setTextInput:(id)arg0;
- (BOOL)textView:(id)arg0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 replacementText:(id)arg2;
- (id)extraInfo;
- (id)plainText;
- (void)appendCharacter:(id)arg0;
- (unsigned long long)maxUserCount;

@end
