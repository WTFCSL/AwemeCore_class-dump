//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDistributionReportInfo : MTLModel <MTLJSONSerializing> {
    unsigned long long _bizType;
    unsigned long long _funcType;
    NSString *_extra;
}

@property (nonatomic) unsigned long long bizType;
@property (nonatomic) unsigned long long funcType;
@property (retain, nonatomic) NSString *extra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (unsigned long long)bizType;
- (void)setBizType:(unsigned long long)arg0;
- (unsigned long long)funcType;
- (void)setFuncType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)extra;

@end
