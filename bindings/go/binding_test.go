package tree_sitter_ld_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-ld"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_ld.Language())
	if language == nil {
		t.Errorf("Error loading Ld grammar")
	}
}
