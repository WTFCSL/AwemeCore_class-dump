//
//     Generated by private class-dump
//

@interface GDataXMLDocument : NSObject {
    struct _xmlDoc { void *x0; int x1; char *x2; struct _xmlNode *x3; struct _xmlNode *x4; struct _xmlNode *x5; struct _xmlNode *x6; struct _xmlNode *x7; struct _xmlDoc *x8; int x9; int x10; struct _xmlDtd *x11; struct _xmlDtd *x12; struct _xmlNs *x13; char *x14; char *x15; void *x16; void *x17; char *x18; int x19; struct _xmlDict *x20; void *x21; int x22; int x23; } *xmlDoc_;
}

- (id)nodesForXPath:(id)arg0 namespaces:(id)arg1 error:(id *)arg2;
- (void)addStringsCacheToDoc;
- (id)XMLData;
- (id)initWithXMLString:(id)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (void)setVersion:(id)arg0;
- (id)rootElement;
- (id)description;
- (void)dealloc;
- (id)initWithData:(id)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (id)nodesForXPath:(id)arg0 error:(id *)arg1;
- (id)initWithRootElement:(id)arg0;
- (void)setCharacterEncoding:(id)arg0;

@end
