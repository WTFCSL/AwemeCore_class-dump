//
//     Generated by private class-dump
//

@class NSArray;

@interface ILAMomentAddress : NSObject {
    NSArray *_includeCitys;
    NSArray *_excludeCitys;
}

@property (copy, nonatomic) NSArray *includeCitys;
@property (copy, nonatomic) NSArray *excludeCitys;

- (id)includeCitys;
- (id)excludeCitys;
- (struct MomentAddrItem { struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x0; struct vector<std::string, std::allocator<std::string>> { void *x0; void *x1; struct __compressed_pair<std::string *, std::allocator<std::string>> { void *x0; } x2; } x1; })getTargetAddress;
- (void)setIncludeCitys:(id)arg0;
- (void)setExcludeCitys:(id)arg0;
- (void).cxx_destruct;

@end
