//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@protocol IESLivePictureSearcher <NSObject>

@property (copy, nonatomic) NSString *pageType;
@property (nonatomic) BOOL showBG;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *searchFrom;
@property (copy, nonatomic) NSString *searchFromSecond;
@property (nonatomic) BOOL showSelector;
@property (copy, nonatomic) NSDictionary *logExtraDic;
@property (copy, nonatomic) NSString *federationInfo;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)logExtraDic;
- (void)setLogExtraDic:(id)arg0;
- (void)jumpToScanPageWithImage:(id)arg0;
- (BOOL)showBG;
- (void)setShowBG:(BOOL)arg0;
- (id)searchFrom;
- (void)setSearchFrom:(id)arg0;
- (id)searchFromSecond;
- (void)setSearchFromSecond:(id)arg0;
- (BOOL)showSelector;
- (void)setShowSelector:(BOOL)arg0;
- (id)federationInfo;
- (void)setFederationInfo:(id)arg0;
- (id)pageType;
- (void)setPageType:(id)arg0;

@end
