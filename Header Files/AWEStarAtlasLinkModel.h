//
//     Generated by private class-dump
//

@class NSString;

@interface AWEStarAtlasLinkModel : AWEAdLinkModel <AWECommentListHeaderViewExtraInfoProtocol> {
    NSString *_subtitle;
    NSString *_linkID;
    NSString *_downloadURL;
    NSString *_complianceData;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *linkID;
@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *complianceData;

+ (id)JSONKeyPathsByPropertyKey;

- (id)complianceData;
- (void)setComplianceData:(id)arg0;
- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)iconImageName;
- (void)setDownloadURL:(id)arg0;
- (id)downloadURL;
- (id)subtitle;
- (void)setSubtitle:(id)arg0;
- (id)componentSeparator;
- (id)linkID;
- (void)setLinkID:(id)arg0;

@end
