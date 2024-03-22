//
//     Generated by private class-dump
//

@class NSString;

@interface XPlayBusinessTaskInfo : NSObject <XPlayBusinessTaskInfoProtocol> {
    unsigned long long type;
    unsigned long long status;
    NSString *extra;
    unsigned long long order;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) unsigned long long order;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskInfoWithDict:(id)arg0;

- (void)setExtra:(id)arg0;
- (unsigned long long)order;
- (void)setOrder:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (unsigned long long)type;
- (id)extra;
- (void)setType:(unsigned long long)arg0;
- (void)setStatus:(unsigned long long)arg0;

@end
