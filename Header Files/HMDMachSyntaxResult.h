//
//     Generated by private class-dump
//

@class NSData;

@interface HMDMachSyntaxResult : NSObject {
    unsigned long long _version;
    NSData *_data;
    void /* function */ *_processor;
}

@property (nonatomic) unsigned long long version;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) void /* function */ *processor;

+ (id)syntaxResultWithData:(id)arg0 processor:(void /* function */ *)arg1 version:(unsigned long long)arg2;

- (id)data;
- (void)setVersion:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (unsigned long long)version;
- (void /* function */ *)processor;
- (void)setProcessor:(void /* function */ *)arg0;

@end
