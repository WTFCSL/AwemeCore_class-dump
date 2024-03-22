//
//     Generated by private class-dump
//

@class NSString;

@interface IESMLModel : NSObject {
    NSString *_modelID;
    struct shared_ptr<IESMLCPPSDK::IMLModel> { struct IMLModel *__ptr_; struct __shared_weak_count *__cntrl_; } _model;
}

@property (nonatomic) BOOL isLens;
@property (nonatomic) long long maxWidth;
@property (nonatomic) long long maxHeight;
@property (nonatomic) struct shared_ptr<IESMLCPPSDK::IMLModel> { struct IMLModel *__ptr_; struct __shared_weak_count *__cntrl_; } model;
@property (retain, nonatomic) NSString *modelID;

- (void)predictWithInputParams:(id)arg0 async:(BOOL)arg1 completion:(id /* block */)arg2;
- (id)getPredictionResultWithInputParams:(id)arg0;
- (struct map<std::__1::basic_string<char>, IESMLCPPSDK::Variant, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IESMLCPPSDK::Variant>>> { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, void *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::less<std::__1::basic_string<char>>, true>> { unsigned long long x0; } x2; } x0; })preProcess:(id)arg0;
- (id)postProcess:(struct map<std::__1::basic_string<char>, IESMLCPPSDK::Variant, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, IESMLCPPSDK::Variant>>> { struct __tree<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> *x0; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, void *>>> { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> *x0; } x0; } x1; struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, IESMLCPPSDK::Variant>, std::__1::less<std::__1::basic_string<char>>, true>> { unsigned long long x0; } x2; } x0; } *)arg0 originParams:(id)arg1;
- (void)releaseMetalResource;
- (id)initWithSharePtrModel:(struct shared_ptr<IESMLCPPSDK::IMLModel> { struct IMLModel *x0; struct __shared_weak_count *x1; })arg0;
- (BOOL)isLens;
- (void)reportLensState:(BOOL)arg0 time:(long long)arg1;
- (void)cacheImage:(id)arg0 url:(id)arg1;
- (void)lensProcessImage:(id)arg0 url:(id)arg1 completion:(id /* block */)arg2;
- (void)releaseLensResource;
- (void)processImage:(id)arg0 url:(id)arg1 completion:(id /* block */)arg2;
- (void)setIsLens:(BOOL)arg0;
- (void)setModelID:(id)arg0;
- (void)setModel:(struct shared_ptr<IESMLCPPSDK::IMLModel> { struct IMLModel *x0; struct __shared_weak_count *x1; })arg0;
- (void).cxx_destruct;
- (void)setMaxWidth:(long long)arg0;
- (struct shared_ptr<IESMLCPPSDK::IMLModel> { struct IMLModel *x0; struct __shared_weak_count *x1; })model;
- (long long)maxWidth;
- (void)releaseResource;
- (void)setMaxHeight:(long long)arg0;
- (id)modelID;
- (long long)maxHeight;
- (void)dealloc;
- (id).cxx_construct;
- (id)processor;
- (void)setProcessor:(id)arg0;

@end