//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface BDXBridgeReportALogCodePosition : BDXBridgeModel {
    NSString *_file;
    NSString *_function;
    NSNumber *_line;
}

@property (copy, nonatomic) NSString *file;
@property (copy, nonatomic) NSString *function;
@property (retain, nonatomic) NSNumber *line;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)function;
- (void)setFunction:(id)arg0;
- (void).cxx_destruct;
- (void)setFile:(id)arg0;
- (id)line;
- (id)file;
- (void)setLine:(id)arg0;

@end