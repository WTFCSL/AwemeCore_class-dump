//
//     Generated by private class-dump
//

@class NSString, AWESmartFeedLastViewModel;

@protocol AWEConcernFeedDataControllerProtocol <NSObject>

@property (retain, nonatomic) AWESmartFeedLastViewModel *lastViewModel;
@property (nonatomic) BOOL isUploadAwemeInsertedBeforeInitialFetch;
@property (copy, nonatomic) NSString *blankPanelText;
@property (copy, nonatomic) NSString *previousPageValue;
@property (nonatomic) long long level;
@property (nonatomic) BOOL currentRequestContainsForceInsert;

- (void)setPreviousPageValue:(id)arg0;
- (BOOL)isUploadAwemeInsertedBeforeInitialFetch;
- (void)setIsUploadAwemeInsertedBeforeInitialFetch:(BOOL)arg0;
- (id)lastViewModel;
- (void)setLastViewModel:(id)arg0;
- (id)blankPanelText;
- (void)setBlankPanelText:(id)arg0;
- (id)previousPageValue;
- (void)setCurrentRequestContainsForceInsert:(BOOL)arg0;
- (BOOL)currentRequestContainsForceInsert;
- (void)setLevel:(long long)arg0;
- (long long)level;

@end
