//
//     Generated by private class-dump
//

@class NSArray, AWEAwemeDetailNaviBarCommonContext, NSString;

@interface AWEAwemeDetailBaseNaviBarController : NSObject <AWEAwemeDetailNaviBarControllerProtocol> {
    AWEAwemeDetailNaviBarCommonContext *_context;
    NSArray *_middleContainer;
}

@property (retain, nonatomic) AWEAwemeDetailNaviBarCommonContext *context;
@property (copy, nonatomic) NSArray *middleContainer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)middleContainer;
- (void)setMiddleContainer:(id)arg0;
- (id)leftContainerArray;
- (id)rightContainerArray;
- (id)middleContainerArray;
- (void)updateMiddleContainerWithArray:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end