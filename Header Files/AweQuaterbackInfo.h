//
//     Generated by private class-dump
//

@class NSString;

@interface AweQuaterbackInfo : NSObject {
    BOOL _async;
    NSString *_path;
    NSString *_name;
    NSString *_version;
    NSString *_moduleId;
}

@property (copy, nonatomic) NSString *path;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *version;
@property (nonatomic) BOOL async;
@property (copy, nonatomic) NSString *moduleId;

- (id)moduleId;
- (void)setModuleId:(id)arg0;
- (void)setPath:(id)arg0;
- (id)init;
- (void)setVersion:(id)arg0;
- (void).cxx_destruct;
- (id)path;
- (id)version;
- (void)setName:(id)arg0;
- (BOOL)async;
- (id)name;
- (void)setAsync:(BOOL)arg0;

@end
