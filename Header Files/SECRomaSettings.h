//
//     Generated by private class-dump
//

@class NSString;

@interface SECRomaSettings : NSObject {
    BOOL _romaV2AB;
    NSString *_accessKey;
}

@property BOOL romaV2AB;
@property (copy) NSString *accessKey;

+ (id)shared;

- (BOOL)romaV2AB;
- (BOOL)interceptorEnabled;
- (id)referList;
- (void)setRomaV2AB:(BOOL)arg0;
- (BOOL)enabled;
- (void).cxx_destruct;
- (id)accessKey;
- (void)setAccessKey:(id)arg0;

@end
