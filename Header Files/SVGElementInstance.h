//
//     Generated by private class-dump
//

@class SVGElement, SVGElementInstanceList;

@interface SVGElementInstance : NSObject {
    SVGElementInstance *parentNode;
    SVGElementInstanceList *childNodes;
    SVGElement *_correspondingElement;
}

@property (weak, nonatomic) SVGElement *correspondingElement;
@property (retain, nonatomic) SVGElementInstance *parentNode;
@property (retain, nonatomic) SVGElementInstanceList *childNodes;
@property (readonly, nonatomic) SVGElementInstance *firstChild;
@property (readonly, nonatomic) SVGElementInstance *lastChild;
@property (readonly, nonatomic) SVGElementInstance *previousSibling;
@property (readonly, nonatomic) SVGElementInstance *nextSibling;

- (void)setCorrespondingElement:(id)arg0;
- (id)correspondingElement;
- (void).cxx_destruct;
- (void)dealloc;
- (id)previousSibling;
- (id)childNodes;
- (id)lastChild;
- (id)firstChild;
- (id)parentNode;
- (id)nextSibling;
- (void)setParentNode:(id)arg0;
- (void)setChildNodes:(id)arg0;

@end
