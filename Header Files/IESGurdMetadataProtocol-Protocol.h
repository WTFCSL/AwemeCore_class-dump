//
//     Generated by private class-dump
//

@class NSString;

@protocol IESGurdMetadataProtocol <IESMetadataProtocol>

+ (id)metaWithData:(id)arg0;

@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) unsigned long long packageID;

- (id)channel;
- (void)setChannel:(id)arg0;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;
- (unsigned long long)packageID;
- (void)setPackageID:(unsigned long long)arg0;

@end