//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDTOScanObjectModel : MTLModel <MTLJSONSerializing> {
    NSString *_scanEnterFrom;
    NSString *_scanType;
}

@property (copy, nonatomic) NSString *scanEnterFrom;
@property (copy, nonatomic) NSString *scanType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)scanEnterFrom;
- (void)setScanEnterFrom:(id)arg0;
- (void).cxx_destruct;
- (id)scanType;
- (void)setScanType:(id)arg0;

@end
