//
//     Generated by private class-dump
//

@class SVGSVGElement, NSString, CSSStyleDeclaration;

@interface SVGElement : Element <SVGStylable> {
    NSString *_identifier;
    NSString *xmlbase;
    SVGSVGElement *_rootOfCurrentDocumentFragment;
    SVGElement *_viewportElement;
    NSString *_stringValue;
    NSString *className;
    CSSStyleDeclaration *style;
}

@property (copy, nonatomic) NSString *stringValue;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *xmlbase;
@property (weak, nonatomic) SVGSVGElement *rootOfCurrentDocumentFragment;
@property (weak, nonatomic) SVGElement *viewportElement;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *className;
@property (retain, nonatomic) CSSStyleDeclaration *style;

+ (BOOL)shouldStoreContent;

- (id)getPresentationAttribute:(id)arg0;
- (id)initWithLocalName:(id)arg0 attributes:(id)arg1;
- (id)initWithQualifiedName:(id)arg0 inNameSpaceURI:(id)arg1 attributes:(id)arg2;
- (void)setViewportElement:(id)arg0;
- (void)setRootOfCurrentDocumentFragment:(id)arg0;
- (void)reCalculateAndSetViewportElementReferenceUsingFirstSVGAncestor:(id)arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nextSelectorGroupFromText:(id)arg0 startFrom:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })nextSelectorRangeFromText:(id)arg0 startFrom:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1;
- (BOOL)selector:(id)arg0 appliesTo:(id)arg1 specificity:(long long *)arg2;
- (BOOL)styleRule:(id)arg0 appliesTo:(id)arg1 specificity:(long long *)arg2;
- (id)getAttributeAsSVGLength:(id)arg0;
- (id)xmlbase;
- (void)setXmlbase:(id)arg0;
- (id)viewportElement;
- (id)cascadedValueForStylableProperty:(id)arg0;
- (id)cascadedValueForStylableProperty:(id)arg0 inherit:(BOOL)arg1;
- (id)rootOfCurrentDocumentFragment;
- (void)postProcessAttributesAddingErrorsTo:(id)arg0;
- (void)loadDefaults;
- (id)style;
- (void)setClassName:(id)arg0;
- (id)className;
- (void).cxx_destruct;
- (void)setStringValue:(id)arg0;
- (id)identifier;
- (id)stringValue;
- (id)description;
- (void)setStyle:(id)arg0;
- (void)setIdentifier:(id)arg0;
- (void)setParentNode:(id)arg0;

@end