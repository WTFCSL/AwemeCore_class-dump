//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDACSResourceConfig : NSObject {
    BOOL _onlyWIFIReport;
    long long _maxReportTimes;
    long long _fileSizeLimit;
    long long _packageSizeLimit;
    NSString *_reportKey;
    NSString *_reportURL;
    NSDictionary *_allowCIDList;
    NSDictionary *_allowHostList;
}

@property (readonly, nonatomic) BOOL onlyWIFIReport;
@property (readonly, nonatomic) long long maxReportTimes;
@property (readonly, nonatomic) long long fileSizeLimit;
@property (readonly, nonatomic) long long packageSizeLimit;
@property (readonly, copy, nonatomic) NSString *reportKey;
@property (readonly, copy, nonatomic) NSString *reportURL;
@property (readonly, copy, nonatomic) NSDictionary *allowCIDList;
@property (readonly, copy, nonatomic) NSDictionary *allowHostList;

- (long long)fileSizeLimit;
- (BOOL)onlyWIFIReport;
- (long long)maxReportTimes;
- (long long)packageSizeLimit;
- (id)reportKey;
- (id)allowCIDList;
- (id)allowHostList;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg0;
- (id)reportURL;

@end