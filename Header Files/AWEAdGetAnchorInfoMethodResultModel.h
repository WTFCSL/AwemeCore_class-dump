//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdGetAnchorInfoMethodResultModel : BDXBridgeModel {
    NSString *_downloadURL;
    NSString *_complianceData;
    NSString *_bundleBizID;
}

@property (copy, nonatomic) NSString *downloadURL;
@property (copy, nonatomic) NSString *complianceData;
@property (copy, nonatomic) NSString *bundleBizID;

+ (id)JSONKeyPathsByPropertyKey;

- (id)complianceData;
- (void)setComplianceData:(id)arg0;
- (void)setBundleBizID:(id)arg0;
- (id)bundleBizID;
- (void).cxx_destruct;
- (void)setDownloadURL:(id)arg0;
- (id)downloadURL;

@end