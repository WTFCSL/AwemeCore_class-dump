//
//     Generated by private class-dump
//

@class NSMutableArray;
@protocol CKBeautyNodeProtocol;

@interface CKBeautyOffNode : CKBeautyItemModel {
    id<CKBeautyNodeProtocol> _parentNode;
    NSMutableArray *_childNodes;
}

- (void).cxx_destruct;
- (id)iconImageName;
- (void)dealloc;
- (id)childNodes;
- (id)parentNode;
- (void)setParentNode:(id)arg0;
- (void)addChildNode:(id)arg0;
- (id)nodeName;
- (id)nodeId;
- (void)setChildNodes:(id)arg0;

@end
