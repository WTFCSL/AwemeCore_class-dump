//
//     Generated by private class-dump
//

@class NSDictionary;

@interface HMAggregateParam : NSObject {
    long long _fileSize;
    NSDictionary *_fileConfig;
    NSDictionary *_aggreIntoMax;
}

@property (nonatomic) long long fileSize;
@property (copy, nonatomic) NSDictionary *fileConfig;
@property (copy, nonatomic) NSDictionary *aggreIntoMax;

- (void)setAggreIntoMax:(id)arg0;
- (id)fileConfig;
- (void)setFileConfig:(id)arg0;
- (id)aggreIntoMax;
- (void).cxx_destruct;
- (long long)fileSize;
- (void)setFileSize:(long long)arg0;

@end